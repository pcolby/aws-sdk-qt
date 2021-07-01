/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putinlinepolicytopermissionsetresponse.h"
#include "putinlinepolicytopermissionsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::PutInlinePolicyToPermissionSetResponse
 * \brief The PutInlinePolicyToPermissionSetResponse class provides an interace for SSOAdmin PutInlinePolicyToPermissionSet responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::putInlinePolicyToPermissionSet
 */

/*!
 * Constructs a PutInlinePolicyToPermissionSetResponse object for \a reply to \a request, with parent \a parent.
 */
PutInlinePolicyToPermissionSetResponse::PutInlinePolicyToPermissionSetResponse(
        const PutInlinePolicyToPermissionSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new PutInlinePolicyToPermissionSetResponsePrivate(this), parent)
{
    setRequest(new PutInlinePolicyToPermissionSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutInlinePolicyToPermissionSetRequest * PutInlinePolicyToPermissionSetResponse::request() const
{
    Q_D(const PutInlinePolicyToPermissionSetResponse);
    return static_cast<const PutInlinePolicyToPermissionSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSOAdmin PutInlinePolicyToPermissionSet \a response.
 */
void PutInlinePolicyToPermissionSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutInlinePolicyToPermissionSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::PutInlinePolicyToPermissionSetResponsePrivate
 * \brief The PutInlinePolicyToPermissionSetResponsePrivate class provides private implementation for PutInlinePolicyToPermissionSetResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a PutInlinePolicyToPermissionSetResponsePrivate object with public implementation \a q.
 */
PutInlinePolicyToPermissionSetResponsePrivate::PutInlinePolicyToPermissionSetResponsePrivate(
    PutInlinePolicyToPermissionSetResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin PutInlinePolicyToPermissionSet response element from \a xml.
 */
void PutInlinePolicyToPermissionSetResponsePrivate::parsePutInlinePolicyToPermissionSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutInlinePolicyToPermissionSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
