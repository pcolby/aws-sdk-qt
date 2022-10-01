// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconfigresponse.h"
#include "getconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::GetConfigResponse
 * \brief The GetConfigResponse class provides an interace for CloudHsm GetConfig responses.
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
 * \sa CloudHsmClient::getConfig
 */

/*!
 * Constructs a GetConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetConfigResponse::GetConfigResponse(
        const GetConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new GetConfigResponsePrivate(this), parent)
{
    setRequest(new GetConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConfigRequest * GetConfigResponse::request() const
{
    Q_D(const GetConfigResponse);
    return static_cast<const GetConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm GetConfig \a response.
 */
void GetConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::GetConfigResponsePrivate
 * \brief The GetConfigResponsePrivate class provides private implementation for GetConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a GetConfigResponsePrivate object with public implementation \a q.
 */
GetConfigResponsePrivate::GetConfigResponsePrivate(
    GetConfigResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm GetConfig response element from \a xml.
 */
void GetConfigResponsePrivate::parseGetConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
