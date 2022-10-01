// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBBOOKMARKREQUEST_H
#define QTAWS_GETJOBBOOKMARKREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetJobBookmarkRequestPrivate;

class QTAWSGLUE_EXPORT GetJobBookmarkRequest : public GlueRequest {

public:
    GetJobBookmarkRequest(const GetJobBookmarkRequest &other);
    GetJobBookmarkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobBookmarkRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
