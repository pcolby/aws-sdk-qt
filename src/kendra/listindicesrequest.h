// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINDICESREQUEST_H
#define QTAWS_LISTINDICESREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class ListIndicesRequestPrivate;

class QTAWSKENDRA_EXPORT ListIndicesRequest : public KendraRequest {

public:
    ListIndicesRequest(const ListIndicesRequest &other);
    ListIndicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIndicesRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
