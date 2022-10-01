// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERPOLICYRESPONSE_H
#define QTAWS_DELETECONTAINERPOLICYRESPONSE_H

#include "mediastoreresponse.h"
#include "deletecontainerpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteContainerPolicyResponsePrivate;

class QTAWSMEDIASTORE_EXPORT DeleteContainerPolicyResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    DeleteContainerPolicyResponse(const DeleteContainerPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContainerPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContainerPolicyResponse)
    Q_DISABLE_COPY(DeleteContainerPolicyResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
