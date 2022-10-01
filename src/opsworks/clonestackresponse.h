// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLONESTACKRESPONSE_H
#define QTAWS_CLONESTACKRESPONSE_H

#include "opsworksresponse.h"
#include "clonestackrequest.h"

namespace QtAws {
namespace OpsWorks {

class CloneStackResponsePrivate;

class QTAWSOPSWORKS_EXPORT CloneStackResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    CloneStackResponse(const CloneStackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CloneStackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloneStackResponse)
    Q_DISABLE_COPY(CloneStackResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
