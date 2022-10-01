// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHINSIGHTSREQUEST_H
#define QTAWS_SEARCHINSIGHTSREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class SearchInsightsRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT SearchInsightsRequest : public DevOpsGuruRequest {

public:
    SearchInsightsRequest(const SearchInsightsRequest &other);
    SearchInsightsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchInsightsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
