// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHANALYSESREQUEST_H
#define QTAWS_SEARCHANALYSESREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class SearchAnalysesRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT SearchAnalysesRequest : public QuickSightRequest {

public:
    SearchAnalysesRequest(const SearchAnalysesRequest &other);
    SearchAnalysesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchAnalysesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
