// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGSAMLPROVIDERRESPONSE_H
#define QTAWS_TAGSAMLPROVIDERRESPONSE_H

#include "iamresponse.h"
#include "tagsamlproviderrequest.h"

namespace QtAws {
namespace Iam {

class TagSAMLProviderResponsePrivate;

class QTAWSIAM_EXPORT TagSAMLProviderResponse : public IamResponse {
    Q_OBJECT

public:
    TagSAMLProviderResponse(const TagSAMLProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagSAMLProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagSAMLProviderResponse)
    Q_DISABLE_COPY(TagSAMLProviderResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
