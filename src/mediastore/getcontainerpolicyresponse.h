// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERPOLICYRESPONSE_H
#define QTAWS_GETCONTAINERPOLICYRESPONSE_H

#include "mediastoreresponse.h"
#include "getcontainerpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class GetContainerPolicyResponsePrivate;

class QTAWSMEDIASTORE_EXPORT GetContainerPolicyResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    GetContainerPolicyResponse(const GetContainerPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContainerPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerPolicyResponse)
    Q_DISABLE_COPY(GetContainerPolicyResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
