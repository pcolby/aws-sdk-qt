// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "organizationsresponse.h"
#include "organizationsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/*!
 * \class QtAws::Organizations::OrganizationsResponse
 * \brief The OrganizationsResponse class provides an interface for Organizations responses.
 *
 * \inmodule QtAwsOrganizations
 */

/*!
 * Constructs a OrganizationsResponse object with parent \a parent.
 */
OrganizationsResponse::OrganizationsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new OrganizationsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a OrganizationsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from OrganizationsResponsePrivate.
 */
OrganizationsResponse::OrganizationsResponse(OrganizationsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void OrganizationsResponse::parseFailure(QIODevice &response)
{
    //Q_D(OrganizationsResponse);
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
 * \class QtAws::Organizations::OrganizationsResponsePrivate
 * \brief The OrganizationsResponsePrivate class provides private implementation for OrganizationsResponse.
 * \internal
 *
 * \inmodule QtAwsOrganizations
 */

/*!
 * Constructs a OrganizationsResponsePrivate object with public implementation \a q.
 */
OrganizationsResponsePrivate::OrganizationsResponsePrivate(
    OrganizationsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Organizations
} // namespace QtAws
