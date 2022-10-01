// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhapgsresponse.h"
#include "listhapgsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::ListHapgsResponse
 * \brief The ListHapgsResponse class provides an interace for CloudHsm ListHapgs responses.
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
 * \sa CloudHsmClient::listHapgs
 */

/*!
 * Constructs a ListHapgsResponse object for \a reply to \a request, with parent \a parent.
 */
ListHapgsResponse::ListHapgsResponse(
        const ListHapgsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new ListHapgsResponsePrivate(this), parent)
{
    setRequest(new ListHapgsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHapgsRequest * ListHapgsResponse::request() const
{
    Q_D(const ListHapgsResponse);
    return static_cast<const ListHapgsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm ListHapgs \a response.
 */
void ListHapgsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHapgsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::ListHapgsResponsePrivate
 * \brief The ListHapgsResponsePrivate class provides private implementation for ListHapgsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a ListHapgsResponsePrivate object with public implementation \a q.
 */
ListHapgsResponsePrivate::ListHapgsResponsePrivate(
    ListHapgsResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm ListHapgs response element from \a xml.
 */
void ListHapgsResponsePrivate::parseListHapgsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHapgsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
