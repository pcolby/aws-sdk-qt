// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONEMBEDURLREQUEST_H
#define QTAWS_GETSESSIONEMBEDURLREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class GetSessionEmbedUrlRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT GetSessionEmbedUrlRequest : public QuickSightRequest {

public:
    GetSessionEmbedUrlRequest(const GetSessionEmbedUrlRequest &other);
    GetSessionEmbedUrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSessionEmbedUrlRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
