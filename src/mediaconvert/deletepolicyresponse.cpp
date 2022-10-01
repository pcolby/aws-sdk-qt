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

#include "deletepolicyresponse.h"
#include "deletepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DeletePolicyResponse
 * \brief The DeletePolicyResponse class provides an interace for MediaConvert DeletePolicy responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::deletePolicy
 */

/*!
 * Constructs a DeletePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePolicyResponse::DeletePolicyResponse(
        const DeletePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new DeletePolicyResponsePrivate(this), parent)
{
    setRequest(new DeletePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePolicyRequest * DeletePolicyResponse::request() const
{
    Q_D(const DeletePolicyResponse);
    return static_cast<const DeletePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert DeletePolicy \a response.
 */
void DeletePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::DeletePolicyResponsePrivate
 * \brief The DeletePolicyResponsePrivate class provides private implementation for DeletePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a DeletePolicyResponsePrivate object with public implementation \a q.
 */
DeletePolicyResponsePrivate::DeletePolicyResponsePrivate(
    DeletePolicyResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert DeletePolicy response element from \a xml.
 */
void DeletePolicyResponsePrivate::parseDeletePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
