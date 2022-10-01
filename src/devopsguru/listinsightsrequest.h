// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSIGHTSREQUEST_H
#define QTAWS_LISTINSIGHTSREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListInsightsRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT ListInsightsRequest : public DevOpsGuruRequest {

public:
    ListInsightsRequest(const ListInsightsRequest &other);
    ListInsightsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInsightsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
