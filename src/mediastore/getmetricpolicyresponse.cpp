// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmetricpolicyresponse.h"
#include "getmetricpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetMetricPolicyResponse
 * \brief The GetMetricPolicyResponse class provides an interace for MediaStore GetMetricPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getMetricPolicy
 */

/*!
 * Constructs a GetMetricPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetMetricPolicyResponse::GetMetricPolicyResponse(
        const GetMetricPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new GetMetricPolicyResponsePrivate(this), parent)
{
    setRequest(new GetMetricPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMetricPolicyRequest * GetMetricPolicyResponse::request() const
{
    Q_D(const GetMetricPolicyResponse);
    return static_cast<const GetMetricPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore GetMetricPolicy \a response.
 */
void GetMetricPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMetricPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::GetMetricPolicyResponsePrivate
 * \brief The GetMetricPolicyResponsePrivate class provides private implementation for GetMetricPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetMetricPolicyResponsePrivate object with public implementation \a q.
 */
GetMetricPolicyResponsePrivate::GetMetricPolicyResponsePrivate(
    GetMetricPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore GetMetricPolicy response element from \a xml.
 */
void GetMetricPolicyResponsePrivate::parseGetMetricPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMetricPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
