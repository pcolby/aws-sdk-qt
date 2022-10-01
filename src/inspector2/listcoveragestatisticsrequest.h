// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOVERAGESTATISTICSREQUEST_H
#define QTAWS_LISTCOVERAGESTATISTICSREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class ListCoverageStatisticsRequestPrivate;

class QTAWSINSPECTOR2_EXPORT ListCoverageStatisticsRequest : public Inspector2Request {

public:
    ListCoverageStatisticsRequest(const ListCoverageStatisticsRequest &other);
    ListCoverageStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCoverageStatisticsRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
