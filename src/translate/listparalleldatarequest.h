// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARALLELDATAREQUEST_H
#define QTAWS_LISTPARALLELDATAREQUEST_H

#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class ListParallelDataRequestPrivate;

class QTAWSTRANSLATE_EXPORT ListParallelDataRequest : public TranslateRequest {

public:
    ListParallelDataRequest(const ListParallelDataRequest &other);
    ListParallelDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListParallelDataRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
