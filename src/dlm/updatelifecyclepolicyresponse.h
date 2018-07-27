/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_UPDATELIFECYCLEPOLICYRESPONSE_H
#define QTAWS_UPDATELIFECYCLEPOLICYRESPONSE_H

#include "dlmresponse.h"
#include "updatelifecyclepolicyrequest.h"

namespace QtAws {
namespace DLM {

class UpdateLifecyclePolicyResponsePrivate;

class QTAWS_EXPORT UpdateLifecyclePolicyResponse : public DlmResponse {
    Q_OBJECT

public:
    UpdateLifecyclePolicyResponse(const UpdateLifecyclePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLifecyclePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLifecyclePolicyResponse)
    Q_DISABLE_COPY(UpdateLifecyclePolicyResponse)

};

} // namespace DLM
} // namespace QtAws

#endif
