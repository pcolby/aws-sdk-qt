// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listavailablezonesresponse.h"
#include "listavailablezonesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::ListAvailableZonesResponse
 * \brief The ListAvailableZonesResponse class provides an interace for CloudHsm ListAvailableZones responses.
 *
 * \inmodule QtAwsCloudHsm
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHsmClient::listAvailableZones
 */

/*!
 * Constructs a ListAvailableZonesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAvailableZonesResponse::ListAvailableZonesResponse(
        const ListAvailableZonesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new ListAvailableZonesResponsePrivate(this), parent)
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
 * Parses a successful CloudHsm ListAvailableZones \a response.
 */
void ListAvailableZonesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAvailableZonesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::ListAvailableZonesResponsePrivate
 * \brief The ListAvailableZonesResponsePrivate class provides private implementation for ListAvailableZonesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a ListAvailableZonesResponsePrivate object with public implementation \a q.
 */
ListAvailableZonesResponsePrivate::ListAvailableZonesResponsePrivate(
    ListAvailableZonesResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm ListAvailableZones response element from \a xml.
 */
void ListAvailableZonesResponsePrivate::parseListAvailableZonesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAvailableZonesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
