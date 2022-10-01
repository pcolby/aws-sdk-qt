// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORSPOLICYRESPONSE_H
#define QTAWS_GETCORSPOLICYRESPONSE_H

#include "mediastoreresponse.h"
#include "getcorspolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class GetCorsPolicyResponsePrivate;

class QTAWSMEDIASTORE_EXPORT GetCorsPolicyResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    GetCorsPolicyResponse(const GetCorsPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCorsPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCorsPolicyResponse)
    Q_DISABLE_COPY(GetCorsPolicyResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
