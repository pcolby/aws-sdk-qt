// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEMACIERESPONSE_H
#define QTAWS_DISABLEMACIERESPONSE_H

#include "macie2response.h"
#include "disablemacierequest.h"

namespace QtAws {
namespace Macie2 {

class DisableMacieResponsePrivate;

class QTAWSMACIE2_EXPORT DisableMacieResponse : public Macie2Response {
    Q_OBJECT

public:
    DisableMacieResponse(const DisableMacieRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableMacieRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableMacieResponse)
    Q_DISABLE_COPY(DisableMacieResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
