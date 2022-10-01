// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEEMBEDURLFORREGISTEREDUSERREQUEST_H
#define QTAWS_GENERATEEMBEDURLFORREGISTEREDUSERREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class GenerateEmbedUrlForRegisteredUserRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT GenerateEmbedUrlForRegisteredUserRequest : public QuickSightRequest {

public:
    GenerateEmbedUrlForRegisteredUserRequest(const GenerateEmbedUrlForRegisteredUserRequest &other);
    GenerateEmbedUrlForRegisteredUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateEmbedUrlForRegisteredUserRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
