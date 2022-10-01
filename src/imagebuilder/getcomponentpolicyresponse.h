// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTPOLICYRESPONSE_H
#define QTAWS_GETCOMPONENTPOLICYRESPONSE_H

#include "imagebuilderresponse.h"
#include "getcomponentpolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetComponentPolicyResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT GetComponentPolicyResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    GetComponentPolicyResponse(const GetComponentPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetComponentPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComponentPolicyResponse)
    Q_DISABLE_COPY(GetComponentPolicyResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
