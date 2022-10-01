// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTAINERPOLICYRESPONSE_H
#define QTAWS_PUTCONTAINERPOLICYRESPONSE_H

#include "mediastoreresponse.h"
#include "putcontainerpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class PutContainerPolicyResponsePrivate;

class QTAWSMEDIASTORE_EXPORT PutContainerPolicyResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    PutContainerPolicyResponse(const PutContainerPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutContainerPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutContainerPolicyResponse)
    Q_DISABLE_COPY(PutContainerPolicyResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
