// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSTATISTICSREQUEST_H
#define QTAWS_GETFINDINGSTATISTICSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetFindingStatisticsRequestPrivate;

class QTAWSMACIE2_EXPORT GetFindingStatisticsRequest : public Macie2Request {

public:
    GetFindingStatisticsRequest(const GetFindingStatisticsRequest &other);
    GetFindingStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingStatisticsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
