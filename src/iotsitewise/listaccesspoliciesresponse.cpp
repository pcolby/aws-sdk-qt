// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccesspoliciesresponse.h"
#include "listaccesspoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListAccessPoliciesResponse
 * \brief The ListAccessPoliciesResponse class provides an interace for IoTSiteWise ListAccessPolicies responses.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web Services service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the Amazon Web Services Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise User Guide</a>. For information about IoT
 *  SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a> in the
 *  <i>IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::listAccessPolicies
 */

/*!
 * Constructs a ListAccessPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccessPoliciesResponse::ListAccessPoliciesResponse(
        const ListAccessPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new ListAccessPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListAccessPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccessPoliciesRequest * ListAccessPoliciesResponse::request() const
{
    Q_D(const ListAccessPoliciesResponse);
    return static_cast<const ListAccessPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise ListAccessPolicies \a response.
 */
void ListAccessPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccessPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::ListAccessPoliciesResponsePrivate
 * \brief The ListAccessPoliciesResponsePrivate class provides private implementation for ListAccessPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListAccessPoliciesResponsePrivate object with public implementation \a q.
 */
ListAccessPoliciesResponsePrivate::ListAccessPoliciesResponsePrivate(
    ListAccessPoliciesResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise ListAccessPolicies response element from \a xml.
 */
void ListAccessPoliciesResponsePrivate::parseListAccessPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccessPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
