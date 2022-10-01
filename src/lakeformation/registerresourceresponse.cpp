// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerresourceresponse.h"
#include "registerresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::RegisterResourceResponse
 * \brief The RegisterResourceResponse class provides an interace for LakeFormation RegisterResource responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::registerResource
 */

/*!
 * Constructs a RegisterResourceResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterResourceResponse::RegisterResourceResponse(
        const RegisterResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new RegisterResourceResponsePrivate(this), parent)
{
    setRequest(new RegisterResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterResourceRequest * RegisterResourceResponse::request() const
{
    Q_D(const RegisterResourceResponse);
    return static_cast<const RegisterResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation RegisterResource \a response.
 */
void RegisterResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::RegisterResourceResponsePrivate
 * \brief The RegisterResourceResponsePrivate class provides private implementation for RegisterResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a RegisterResourceResponsePrivate object with public implementation \a q.
 */
RegisterResourceResponsePrivate::RegisterResourceResponsePrivate(
    RegisterResourceResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation RegisterResource response element from \a xml.
 */
void RegisterResourceResponsePrivate::parseRegisterResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
