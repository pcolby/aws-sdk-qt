// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAILDOMAINSRESPONSE_H
#define QTAWS_LISTMAILDOMAINSRESPONSE_H

#include "workmailresponse.h"
#include "listmaildomainsrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMailDomainsResponsePrivate;

class QTAWSWORKMAIL_EXPORT ListMailDomainsResponse : public WorkMailResponse {
    Q_OBJECT

public:
    ListMailDomainsResponse(const ListMailDomainsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMailDomainsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMailDomainsResponse)
    Q_DISABLE_COPY(ListMailDomainsResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
