// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTAINERRECIPEPOLICYRESPONSE_H
#define QTAWS_PUTCONTAINERRECIPEPOLICYRESPONSE_H

#include "imagebuilderresponse.h"
#include "putcontainerrecipepolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class PutContainerRecipePolicyResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT PutContainerRecipePolicyResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    PutContainerRecipePolicyResponse(const PutContainerRecipePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutContainerRecipePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutContainerRecipePolicyResponse)
    Q_DISABLE_COPY(PutContainerRecipePolicyResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
