// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "clouddirectoryresponse.h"
#include "clouddirectoryresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CloudDirectoryResponse
 * \brief The CloudDirectoryResponse class provides an interface for CloudDirectory responses.
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CloudDirectoryResponse object with parent \a parent.
 */
CloudDirectoryResponse::CloudDirectoryResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudDirectoryResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudDirectoryResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudDirectoryResponsePrivate.
 */
CloudDirectoryResponse::CloudDirectoryResponse(CloudDirectoryResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudDirectoryResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudDirectoryResponse);
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
 * \class QtAws::CloudDirectory::CloudDirectoryResponsePrivate
 * \brief The CloudDirectoryResponsePrivate class provides private implementation for CloudDirectoryResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CloudDirectoryResponsePrivate object with public implementation \a q.
 */
CloudDirectoryResponsePrivate::CloudDirectoryResponsePrivate(
    CloudDirectoryResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
