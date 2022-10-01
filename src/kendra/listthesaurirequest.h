// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHESAURIREQUEST_H
#define QTAWS_LISTTHESAURIREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class ListThesauriRequestPrivate;

class QTAWSKENDRA_EXPORT ListThesauriRequest : public KendraRequest {

public:
    ListThesauriRequest(const ListThesauriRequest &other);
    ListThesauriRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThesauriRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
