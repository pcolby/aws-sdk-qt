/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listavailablezonesresponse.h"
#include "listavailablezonesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::ListAvailableZonesResponse
 * \brief The ListAvailableZonesResponse class provides an interace for CloudHSM ListAvailableZones responses.
 *
 * \inmodule QtAwsCloudHSM
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHSMClient::listAvailableZones
 */

/*!
 * Constructs a ListAvailableZonesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAvailableZonesResponse::ListAvailableZonesResponse(
        const ListAvailableZonesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new ListAvailableZonesResponsePrivate(this), parent)
{
    setRequest(new ListAvailableZonesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAvailableZonesRequest * ListAvailableZonesResponse::request() const
{
    Q_D(const ListAvailableZonesResponse);
    return static_cast<const ListAvailableZonesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHSM ListAvailableZones \a response.
 */
void ListAvailableZonesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAvailableZonesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHSM::ListAvailableZonesResponsePrivate
 * \brief The ListAvailableZonesResponsePrivate class provides private implementation for ListAvailableZonesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a ListAvailableZonesResponsePrivate object with public implementation \a q.
 */
ListAvailableZonesResponsePrivate::ListAvailableZonesResponsePrivate(
    ListAvailableZonesResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * Parses a CloudHSM ListAvailableZones response element from \a xml.
 */
void ListAvailableZonesResponsePrivate::parseListAvailableZonesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAvailableZonesResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
