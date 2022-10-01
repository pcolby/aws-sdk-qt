// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCORSPOLICYRESPONSE_H
#define QTAWS_PUTCORSPOLICYRESPONSE_H

#include "mediastoreresponse.h"
#include "putcorspolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class PutCorsPolicyResponsePrivate;

class QTAWSMEDIASTORE_EXPORT PutCorsPolicyResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    PutCorsPolicyResponse(const PutCorsPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutCorsPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutCorsPolicyResponse)
    Q_DISABLE_COPY(PutCorsPolicyResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
