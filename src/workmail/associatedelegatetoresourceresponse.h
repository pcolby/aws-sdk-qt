// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDELEGATETORESOURCERESPONSE_H
#define QTAWS_ASSOCIATEDELEGATETORESOURCERESPONSE_H

#include "workmailresponse.h"
#include "associatedelegatetoresourcerequest.h"

namespace QtAws {
namespace WorkMail {

class AssociateDelegateToResourceResponsePrivate;

class QTAWSWORKMAIL_EXPORT AssociateDelegateToResourceResponse : public WorkMailResponse {
    Q_OBJECT

public:
    AssociateDelegateToResourceResponse(const AssociateDelegateToResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateDelegateToResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDelegateToResourceResponse)
    Q_DISABLE_COPY(AssociateDelegateToResourceResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
