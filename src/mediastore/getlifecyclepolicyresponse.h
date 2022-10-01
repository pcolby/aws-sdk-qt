// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLIFECYCLEPOLICYRESPONSE_H
#define QTAWS_GETLIFECYCLEPOLICYRESPONSE_H

#include "mediastoreresponse.h"
#include "getlifecyclepolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class GetLifecyclePolicyResponsePrivate;

class QTAWSMEDIASTORE_EXPORT GetLifecyclePolicyResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    GetLifecyclePolicyResponse(const GetLifecyclePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLifecyclePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLifecyclePolicyResponse)
    Q_DISABLE_COPY(GetLifecyclePolicyResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
