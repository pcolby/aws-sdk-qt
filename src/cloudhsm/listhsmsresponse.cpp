// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhsmsresponse.h"
#include "listhsmsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::ListHsmsResponse
 * \brief The ListHsmsResponse class provides an interace for CloudHsm ListHsms responses.
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
 * \sa CloudHsmClient::listHsms
 */

/*!
 * Constructs a ListHsmsResponse object for \a reply to \a request, with parent \a parent.
 */
ListHsmsResponse::ListHsmsResponse(
        const ListHsmsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new ListHsmsResponsePrivate(this), parent)
{
    setRequest(new ListHsmsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHsmsRequest * ListHsmsResponse::request() const
{
    Q_D(const ListHsmsResponse);
    return static_cast<const ListHsmsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm ListHsms \a response.
 */
void ListHsmsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHsmsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::ListHsmsResponsePrivate
 * \brief The ListHsmsResponsePrivate class provides private implementation for ListHsmsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a ListHsmsResponsePrivate object with public implementation \a q.
 */
ListHsmsResponsePrivate::ListHsmsResponsePrivate(
    ListHsmsResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm ListHsms response element from \a xml.
 */
void ListHsmsResponsePrivate::parseListHsmsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHsmsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
