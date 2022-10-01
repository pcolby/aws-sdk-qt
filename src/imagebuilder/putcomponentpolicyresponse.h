// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMPONENTPOLICYRESPONSE_H
#define QTAWS_PUTCOMPONENTPOLICYRESPONSE_H

#include "imagebuilderresponse.h"
#include "putcomponentpolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class PutComponentPolicyResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT PutComponentPolicyResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    PutComponentPolicyResponse(const PutComponentPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutComponentPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutComponentPolicyResponse)
    Q_DISABLE_COPY(PutComponentPolicyResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
