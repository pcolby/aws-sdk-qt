// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOLICYRESPONSE_H
#define QTAWS_DELETEPOLICYRESPONSE_H

#include "mediaconvertresponse.h"
#include "deletepolicyrequest.h"

namespace QtAws {
namespace MediaConvert {

class DeletePolicyResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT DeletePolicyResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    DeletePolicyResponse(const DeletePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePolicyResponse)
    Q_DISABLE_COPY(DeletePolicyResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
