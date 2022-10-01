// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETJOBBOOKMARKREQUEST_H
#define QTAWS_RESETJOBBOOKMARKREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class ResetJobBookmarkRequestPrivate;

class QTAWSGLUE_EXPORT ResetJobBookmarkRequest : public GlueRequest {

public:
    ResetJobBookmarkRequest(const ResetJobBookmarkRequest &other);
    ResetJobBookmarkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetJobBookmarkRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
