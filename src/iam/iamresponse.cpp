// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iamresponse.h"
#include "iamresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::IamResponse
 * \brief The IamResponse class provides an interface for Iam responses.
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a IamResponse object with parent \a parent.
 */
IamResponse::IamResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IamResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IamResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IamResponsePrivate.
 */
IamResponse::IamResponse(IamResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IamResponse::parseFailure(QIODevice &response)
{
    //Q_D(IamResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::Iam::IamResponsePrivate
 * \brief The IamResponsePrivate class provides private implementation for IamResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a IamResponsePrivate object with public implementation \a q.
 */
IamResponsePrivate::IamResponsePrivate(
    IamResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Iam
} // namespace QtAws
