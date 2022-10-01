// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlunaclientsresponse.h"
#include "listlunaclientsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::ListLunaClientsResponse
 * \brief The ListLunaClientsResponse class provides an interace for CloudHsm ListLunaClients responses.
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
 * \sa CloudHsmClient::listLunaClients
 */

/*!
 * Constructs a ListLunaClientsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLunaClientsResponse::ListLunaClientsResponse(
        const ListLunaClientsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new ListLunaClientsResponsePrivate(this), parent)
{
    setRequest(new ListLunaClientsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLunaClientsRequest * ListLunaClientsResponse::request() const
{
    Q_D(const ListLunaClientsResponse);
    return static_cast<const ListLunaClientsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm ListLunaClients \a response.
 */
void ListLunaClientsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLunaClientsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::ListLunaClientsResponsePrivate
 * \brief The ListLunaClientsResponsePrivate class provides private implementation for ListLunaClientsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a ListLunaClientsResponsePrivate object with public implementation \a q.
 */
ListLunaClientsResponsePrivate::ListLunaClientsResponsePrivate(
    ListLunaClientsResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm ListLunaClients response element from \a xml.
 */
void ListLunaClientsResponsePrivate::parseListLunaClientsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLunaClientsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
