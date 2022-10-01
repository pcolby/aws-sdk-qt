// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORSPOLICYRESPONSE_H
#define QTAWS_DELETECORSPOLICYRESPONSE_H

#include "mediastoreresponse.h"
#include "deletecorspolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteCorsPolicyResponsePrivate;

class QTAWSMEDIASTORE_EXPORT DeleteCorsPolicyResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    DeleteCorsPolicyResponse(const DeleteCorsPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCorsPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCorsPolicyResponse)
    Q_DISABLE_COPY(DeleteCorsPolicyResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
