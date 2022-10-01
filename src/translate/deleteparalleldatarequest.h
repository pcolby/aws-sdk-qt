// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARALLELDATAREQUEST_H
#define QTAWS_DELETEPARALLELDATAREQUEST_H

#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class DeleteParallelDataRequestPrivate;

class QTAWSTRANSLATE_EXPORT DeleteParallelDataRequest : public TranslateRequest {

public:
    DeleteParallelDataRequest(const DeleteParallelDataRequest &other);
    DeleteParallelDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteParallelDataRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
