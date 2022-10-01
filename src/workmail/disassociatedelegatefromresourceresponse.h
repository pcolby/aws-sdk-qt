// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDELEGATEFROMRESOURCERESPONSE_H
#define QTAWS_DISASSOCIATEDELEGATEFROMRESOURCERESPONSE_H

#include "workmailresponse.h"
#include "disassociatedelegatefromresourcerequest.h"

namespace QtAws {
namespace WorkMail {

class DisassociateDelegateFromResourceResponsePrivate;

class QTAWSWORKMAIL_EXPORT DisassociateDelegateFromResourceResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DisassociateDelegateFromResourceResponse(const DisassociateDelegateFromResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateDelegateFromResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateDelegateFromResourceResponse)
    Q_DISABLE_COPY(DisassociateDelegateFromResourceResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
