// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANALYSESREQUEST_H
#define QTAWS_LISTANALYSESREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListAnalysesRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListAnalysesRequest : public QuickSightRequest {

public:
    ListAnalysesRequest(const ListAnalysesRequest &other);
    ListAnalysesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnalysesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
