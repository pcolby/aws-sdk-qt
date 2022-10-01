// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetruststoreresponse.h"
#include "updatetruststoreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::UpdateTrustStoreResponse
 * \brief The UpdateTrustStoreResponse class provides an interace for WorkSpacesWeb UpdateTrustStore responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::updateTrustStore
 */

/*!
 * Constructs a UpdateTrustStoreResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTrustStoreResponse::UpdateTrustStoreResponse(
        const UpdateTrustStoreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new UpdateTrustStoreResponsePrivate(this), parent)
{
    setRequest(new UpdateTrustStoreRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTrustStoreRequest * UpdateTrustStoreResponse::request() const
{
    Q_D(const UpdateTrustStoreResponse);
    return static_cast<const UpdateTrustStoreRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb UpdateTrustStore \a response.
 */
void UpdateTrustStoreResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTrustStoreResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::UpdateTrustStoreResponsePrivate
 * \brief The UpdateTrustStoreResponsePrivate class provides private implementation for UpdateTrustStoreResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a UpdateTrustStoreResponsePrivate object with public implementation \a q.
 */
UpdateTrustStoreResponsePrivate::UpdateTrustStoreResponsePrivate(
    UpdateTrustStoreResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb UpdateTrustStore response element from \a xml.
 */
void UpdateTrustStoreResponsePrivate::parseUpdateTrustStoreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTrustStoreResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
