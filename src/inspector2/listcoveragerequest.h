// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOVERAGEREQUEST_H
#define QTAWS_LISTCOVERAGEREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class ListCoverageRequestPrivate;

class QTAWSINSPECTOR2_EXPORT ListCoverageRequest : public Inspector2Request {

public:
    ListCoverageRequest(const ListCoverageRequest &other);
    ListCoverageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCoverageRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
