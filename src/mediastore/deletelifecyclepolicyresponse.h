// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELIFECYCLEPOLICYRESPONSE_H
#define QTAWS_DELETELIFECYCLEPOLICYRESPONSE_H

#include "mediastoreresponse.h"
#include "deletelifecyclepolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteLifecyclePolicyResponsePrivate;

class QTAWSMEDIASTORE_EXPORT DeleteLifecyclePolicyResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    DeleteLifecyclePolicyResponse(const DeleteLifecyclePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLifecyclePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLifecyclePolicyResponse)
    Q_DISABLE_COPY(DeleteLifecyclePolicyResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
