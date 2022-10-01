// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getautoterminationpolicyresponse.h"
#include "getautoterminationpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::GetAutoTerminationPolicyResponse
 * \brief The GetAutoTerminationPolicyResponse class provides an interace for Emr GetAutoTerminationPolicy responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::getAutoTerminationPolicy
 */

/*!
 * Constructs a GetAutoTerminationPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetAutoTerminationPolicyResponse::GetAutoTerminationPolicyResponse(
        const GetAutoTerminationPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new GetAutoTerminationPolicyResponsePrivate(this), parent)
{
    setRequest(new GetAutoTerminationPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAutoTerminationPolicyRequest * GetAutoTerminationPolicyResponse::request() const
{
    Q_D(const GetAutoTerminationPolicyResponse);
    return static_cast<const GetAutoTerminationPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr GetAutoTerminationPolicy \a response.
 */
void GetAutoTerminationPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAutoTerminationPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::GetAutoTerminationPolicyResponsePrivate
 * \brief The GetAutoTerminationPolicyResponsePrivate class provides private implementation for GetAutoTerminationPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a GetAutoTerminationPolicyResponsePrivate object with public implementation \a q.
 */
GetAutoTerminationPolicyResponsePrivate::GetAutoTerminationPolicyResponsePrivate(
    GetAutoTerminationPolicyResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr GetAutoTerminationPolicy response element from \a xml.
 */
void GetAutoTerminationPolicyResponsePrivate::parseGetAutoTerminationPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAutoTerminationPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
