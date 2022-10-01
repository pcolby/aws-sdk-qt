// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDELEGATESRESPONSE_H
#define QTAWS_LISTRESOURCEDELEGATESRESPONSE_H

#include "workmailresponse.h"
#include "listresourcedelegatesrequest.h"

namespace QtAws {
namespace WorkMail {

class ListResourceDelegatesResponsePrivate;

class QTAWSWORKMAIL_EXPORT ListResourceDelegatesResponse : public WorkMailResponse {
    Q_OBJECT

public:
    ListResourceDelegatesResponse(const ListResourceDelegatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourceDelegatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceDelegatesResponse)
    Q_DISABLE_COPY(ListResourceDelegatesResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
