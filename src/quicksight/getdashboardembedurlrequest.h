// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDASHBOARDEMBEDURLREQUEST_H
#define QTAWS_GETDASHBOARDEMBEDURLREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class GetDashboardEmbedUrlRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT GetDashboardEmbedUrlRequest : public QuickSightRequest {

public:
    GetDashboardEmbedUrlRequest(const GetDashboardEmbedUrlRequest &other);
    GetDashboardEmbedUrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDashboardEmbedUrlRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
