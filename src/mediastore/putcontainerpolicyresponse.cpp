// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcontainerpolicyresponse.h"
#include "putcontainerpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::PutContainerPolicyResponse
 * \brief The PutContainerPolicyResponse class provides an interace for MediaStore PutContainerPolicy responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::putContainerPolicy
 */

/*!
 * Constructs a PutContainerPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutContainerPolicyResponse::PutContainerPolicyResponse(
        const PutContainerPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new PutContainerPolicyResponsePrivate(this), parent)
{
    setRequest(new PutContainerPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutContainerPolicyRequest * PutContainerPolicyResponse::request() const
{
    Q_D(const PutContainerPolicyResponse);
    return static_cast<const PutContainerPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore PutContainerPolicy \a response.
 */
void PutContainerPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutContainerPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::PutContainerPolicyResponsePrivate
 * \brief The PutContainerPolicyResponsePrivate class provides private implementation for PutContainerPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a PutContainerPolicyResponsePrivate object with public implementation \a q.
 */
PutContainerPolicyResponsePrivate::PutContainerPolicyResponsePrivate(
    PutContainerPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore PutContainerPolicy response element from \a xml.
 */
void PutContainerPolicyResponsePrivate::parsePutContainerPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutContainerPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
