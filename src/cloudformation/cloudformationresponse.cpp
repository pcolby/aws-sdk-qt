// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudformationresponse.h"
#include "cloudformationresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::CloudFormationResponse
 * \brief The CloudFormationResponse class provides an interface for CloudFormation responses.
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a CloudFormationResponse object with parent \a parent.
 */
CloudFormationResponse::CloudFormationResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudFormationResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudFormationResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudFormationResponsePrivate.
 */
CloudFormationResponse::CloudFormationResponse(CloudFormationResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudFormationResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudFormationResponse);
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
 * \class QtAws::CloudFormation::CloudFormationResponsePrivate
 * \brief The CloudFormationResponsePrivate class provides private implementation for CloudFormationResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a CloudFormationResponsePrivate object with public implementation \a q.
 */
CloudFormationResponsePrivate::CloudFormationResponsePrivate(
    CloudFormationResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudFormation
} // namespace QtAws
