// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENDSTATISTICSREQUEST_H
#define QTAWS_GETSENDSTATISTICSREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class GetSendStatisticsRequestPrivate;

class QTAWSSES_EXPORT GetSendStatisticsRequest : public SesRequest {

public:
    GetSendStatisticsRequest(const GetSendStatisticsRequest &other);
    GetSendStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSendStatisticsRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
