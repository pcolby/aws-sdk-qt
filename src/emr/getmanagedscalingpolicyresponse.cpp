// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmanagedscalingpolicyresponse.h"
#include "getmanagedscalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::GetManagedScalingPolicyResponse
 * \brief The GetManagedScalingPolicyResponse class provides an interace for Emr GetManagedScalingPolicy responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::getManagedScalingPolicy
 */

/*!
 * Constructs a GetManagedScalingPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetManagedScalingPolicyResponse::GetManagedScalingPolicyResponse(
        const GetManagedScalingPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new GetManagedScalingPolicyResponsePrivate(this), parent)
{
    setRequest(new GetManagedScalingPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetManagedScalingPolicyRequest * GetManagedScalingPolicyResponse::request() const
{
    Q_D(const GetManagedScalingPolicyResponse);
    return static_cast<const GetManagedScalingPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr GetManagedScalingPolicy \a response.
 */
void GetManagedScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetManagedScalingPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::GetManagedScalingPolicyResponsePrivate
 * \brief The GetManagedScalingPolicyResponsePrivate class provides private implementation for GetManagedScalingPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a GetManagedScalingPolicyResponsePrivate object with public implementation \a q.
 */
GetManagedScalingPolicyResponsePrivate::GetManagedScalingPolicyResponsePrivate(
    GetManagedScalingPolicyResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr GetManagedScalingPolicy response element from \a xml.
 */
void GetManagedScalingPolicyResponsePrivate::parseGetManagedScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetManagedScalingPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
